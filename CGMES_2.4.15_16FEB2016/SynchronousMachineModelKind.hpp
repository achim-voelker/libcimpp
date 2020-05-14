#ifndef SynchronousMachineModelKind_H
#define SynchronousMachineModelKind_H

namespace CIMPP {
	/*
	Type of synchronous machine model used in Dynamic simulation applications.
	*/
	enum class SynchronousMachineModelKind
	{
		/**
		 * Subtransient synchronous machine model.
		 */
		subtransient,
		/**
		 * WECC Type F variant of subtransient synchronous machine model.
		 */
		subtransientTypeF,
		/**
		 * WECC Type J variant of subtransient synchronous machine model.
		 */
		subtransientTypeJ,
		/**
		 * Simplified version of subtransient synchronous machine model where magnetic coupling between the direct and quadrature axes is ignored.
		 */
		subtransientSimplified,
		/**
		 * Simplified version of a subtransient synchronous machine model with no damper circuit on d-axis.
		 */
		subtransientSimplifiedDirectAxis,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineModelKind& rop);
}
#endif
